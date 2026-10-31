/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040478a */

void __thiscall FUN_0040478a(void *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 != 0) {
    *(undefined4 *)((int)this + 4) = 0xffff;
    iVar2 = 1;
    if (param_1 < 0x7b) {
      if (((param_1 - 2U < 2) || (param_1 == 0x35)) || (param_1 == 0x40)) goto LAB_00404817;
    }
    else if (((param_1 == 0x7b) || (param_1 == 0xa1)) || (param_1 == 0x10b)) goto LAB_00404817;
    iVar2 = 0;
    goto LAB_00404817;
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  uVar3 = 0x16d;
  if ((uVar1 & 1) == 0) {
    uVar3 = 0x1ff;
  }
  *(undefined4 *)((int)this + 4) = uVar3;
  if ((uVar1 >> 10 & 1) != 0) {
    if (*(int *)(param_2 + 0x14) == -0x5ffffff4) {
      iVar2 = 4;
      goto LAB_00404817;
    }
    if (*(int *)(param_2 + 0x14) == -0x5ffffffd) {
      iVar2 = 10;
      goto LAB_00404817;
    }
  }
  iVar2 = 3 - (uint)((uVar1 & 0x10) == 0);
LAB_00404817:
  *(int *)this = iVar2;
  return;
}

