# Prepare `kokkos` library

```sh
g++ -c fake-kokkos.cpp -o fake-kokkos-openmp.o && ar rvs libfake-kokkos-openmp.a fake-kokkos-openmp.o
g++ -c fake-kokkos.cpp -o fake-kokkos-cuda.o -DKOKKOS_ENABLE_CUDA=1 && ar rvs libfake-kokkos-cuda.a fake-kokkos-cuda.o
rm *.o || true
```

# Prepare `lammps` library

```sh
g++ -c fake-lammps.cpp libfake-kokkos-openmp.a -o fake-lammps-openmp.o && ar rvs libfake-lammps-openmp.a fake-lammps-openmp.o
g++ -c fake-lammps.cpp libfake-kokkos-cuda.a -o fake-lammps-cuda.o -DLAMMPS_ENABLE_CUDA=1 && ar rvs libfake-lammps-cuda.a fake-lammps-cuda.o
rm *.o || true
```

# Build `driver`

```sh
g++ fake-driver.cpp lib*.a -o driver
```

# Run `driver`

```sh
./driver
```

Shows incorrect output for kokkos:

```
$ ./driver
Calling CUDA lammps:
Computed by CUDA          LAMMPS + Computed by CUDA Kokkos
Calling OpenMP lammps:
Computed by Serial/OpenMP LAMMPS + Computed by CUDA Kokkos
```
