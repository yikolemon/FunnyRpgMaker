/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102283b0 */

/* Library Function - Single Match
    protected: virtual void * __thiscall MemMapBase::`scalar deleting destructor'(unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall MemMapBase::_scalar_deleting_destructor_(MemMapBase *this,uint param_1)

{
  *(undefined ***)this = type_info::vftable;
  if ((param_1 & 1) != 0) {
    FUN_102283a0(this,0xc);
  }
  return this;
}

