import sys

if len(sys.argv)!=2:
    print("Missing Command line arguments")
    sys.exit()

print(f"helo,{sys.argv[1]}")
sys.exit(0)
