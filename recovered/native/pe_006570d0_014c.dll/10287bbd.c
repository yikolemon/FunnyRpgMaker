/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10287bbd */

/* Library Function - Single Match
    public: __thiscall __crt_seek_guard::__crt_seek_guard(int,__int64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

__crt_seek_guard * __thiscall
__crt_seek_guard::__crt_seek_guard(__crt_seek_guard *this,int param_1,__int64 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint in_stack_00000008;
  
  uVar3 = FUN_1027938a(param_1,0,0,1);
  *(undefined8 *)this = uVar3;
  uVar3 = FUN_1027938a(param_1,0,0,2);
  iVar2 = (int)((ulonglong)uVar3 >> 0x20);
  uVar1 = (uint)uVar3;
  *(uint *)(this + 8) = uVar1;
  *(int *)(this + 0x18) = param_1;
  *(uint *)(this + 0x14) = ((int)param_2 - iVar2) - (uint)(in_stack_00000008 < uVar1);
  *(int *)(this + 0xc) = iVar2;
  *(uint *)(this + 0x10) = in_stack_00000008 - uVar1;
  return this;
}

