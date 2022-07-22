import subprocess

c1Total = 0
c2Total = 0
v1Total = 0
v2Total = 0
for i in range(50):
    result = subprocess.run(["./obj_dir/Vaes_128", "10000"], stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
    s = result.stdout
    temp = [float(f) for f in s.split(' ')]
    c1 = temp[0]
    c2 = temp[1]
    v1 = temp[2]
    v2 = temp[3]
    c1Total += c1
    c2Total += c2
    v1Total += v1
    v2Total += v2
    print(c1Total/(i+1))
    print(v1Total/(i+1))
    print(c2Total/(i+1))
    print(v2Total/(i+1))
print((v2Total-v1Total) / (c2Total-c1Total))
