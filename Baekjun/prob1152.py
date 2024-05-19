str = input()

splits = str.split(" ")
new_splits = [ss for ss in splits if ss != '' and ss != '\n']

print(len(new_splits))
