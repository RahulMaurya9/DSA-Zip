if (a[i] <= local_max + a[i]) local_max = local_max + a[i]
else local_max = a[i]
global_max = max(global_max, local_max)