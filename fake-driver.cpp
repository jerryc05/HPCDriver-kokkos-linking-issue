#include <cstdio>
#include <string>

std::string lammps_fn_cuda();
std::string lammps_fn_openmp();

int main() {

  std::puts("Calling CUDA lammps:");
  std::puts(lammps_fn_cuda().c_str());

  std::puts("Calling OpenMP lammps:");
  std::puts(lammps_fn_openmp().c_str());

  return 0;
}
