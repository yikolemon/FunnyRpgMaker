/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102437e0 */

/* Library Function - Single Match
    protected: virtual void * __thiscall std::numpunct<char>::`scalar deleting destructor'(unsigned
   int)
   
   Library: Visual Studio 2019 Release */

void * __thiscall
std::numpunct<char>::_scalar_deleting_destructor_(numpunct<char> *this,uint param_1)

{
  *(undefined ***)this = numpunct<unsigned_short>::vftable;
  thunk_FUN_10274120(*(undefined4 *)(this + 8));
  thunk_FUN_10274120(*(undefined4 *)(this + 0x10));
  thunk_FUN_10274120(*(undefined4 *)(this + 0x14));
  *(undefined ***)this = _Facet_base::vftable;
  if ((param_1 & 1) != 0) {
    FUN_102283a0(this,0x18);
  }
  return this;
}

