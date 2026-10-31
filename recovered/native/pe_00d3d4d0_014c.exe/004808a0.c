/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004808a0 */

void __thiscall
FUN_004808a0(void *this,undefined4 *param_1,uint param_2,int param_3,PLARGE_INTEGER param_4)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  if (((**(int **)((int)this + 0x1c) == (int)this + 0x3c) && (param_4 == (PLARGE_INTEGER)0x1)) &&
     (*(int *)((int)this + 0x38) == 0)) {
    bVar4 = 1 < param_2;
    param_2 = param_2 - 2;
    param_3 = param_3 + -1 + (uint)bVar4;
  }
  if ((((*(int *)((int)this + 0x4c) != 0) && (cVar2 = FUN_00480c40(this), cVar2 != '\0')) &&
      (((param_2 == 0 && param_3 == 0 && (param_4 == (PLARGE_INTEGER)0x1)) ||
       (iVar3 = FUN_0048f7cd(*(FILE **)((int)this + 0x4c),param_2,param_3,param_4), iVar3 == 0))))
     && (iVar3 = FUN_00490c6a(*(FILE **)((int)this + 0x4c),(longlong *)&local_c), iVar3 == 0)) {
    Reset_back((int)this);
    uVar1 = *(undefined4 *)((int)this + 0x40);
    param_1[5] = *(undefined4 *)((int)this + 0x44);
    param_1[4] = uVar1;
    *param_1 = local_c;
    param_1[1] = local_8;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}

