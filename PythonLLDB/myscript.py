import lldb

def print_frames(debugger, command, result, internal_dict):
    target = debugger.GetSelectedTarget()
    process = target.GetProcess()
    thread = process.GetSelectedThread()

    for frame in thread:
        print("Frame #{}".format(frame.GetFrameID()))
        variables = frame.GetVariables(True, True, True, True)
        for variable in variables:
            print(variable)

lldb.debugger.HandleCommand('command script add -f myscript.print_frames print_frames')
# command script import /Users/smoraes-/Templates/git/Libft/PythonLLDB/myscript.py

