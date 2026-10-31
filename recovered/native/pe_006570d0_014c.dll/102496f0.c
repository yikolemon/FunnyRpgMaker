/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102496f0 */

/* Library Function - Single Match
    protected: virtual void * __thiscall std::numpunct<char>::`scalar deleting destructor'(unsigned
   int)
   
   Library: Visual Studio 2019 Release */

void * __thiscall
std::numpunct<char>::_scalar_deleting_destructor_(numpunct<char> *this,uint param_1)

{
  *(undefined ***)this =
       time_get<unsigned_short,std::istreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_>
       ::vftable;
  thunk_FUN_10274120(*(undefined4 *)(this + 8));
  thunk_FUN_10274120(*(undefined4 *)(this + 0xc));
  thunk_FUN_10274120(*(undefined4 *)(this + 0x10));
  *(undefined ***)this = _Facet_base::vftable;
  if ((param_1 & 1) != 0) {
    FUN_102283a0(this,0x44);
  }
  return this;
}

