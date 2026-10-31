/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800024e2 */

void FUN_1800024e2(int *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 != 0) {
    param_1[1] = 0xffff;
    iVar2 = 1;
    if (param_2 < 0x7b) {
      if ((param_2 - 2U < 0x3f) &&
         ((0x4008000000000003U >> ((ulonglong)(param_2 - 2U) & 0x3f) & 1) != 0)) goto LAB_180002572;
    }
    else if (((param_2 == 0x7b) || (param_2 == 0xa1)) || (param_2 == 0x10b)) goto LAB_180002572;
    iVar2 = 0;
    goto LAB_180002572;
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  iVar2 = 0x16d;
  if ((uVar1 & 1) == 0) {
    iVar2 = 0x1ff;
  }
  param_1[1] = iVar2;
  if ((uVar1 >> 10 & 1) != 0) {
    if (*(int *)(param_3 + 0x14) == -0x5ffffff4) {
      iVar2 = 4;
      goto LAB_180002572;
    }
    if (*(int *)(param_3 + 0x14) == -0x5ffffffd) {
      iVar2 = 10;
      goto LAB_180002572;
    }
  }
  iVar2 = 3 - (uint)((uVar1 & 0x10) == 0);
LAB_180002572:
  *param_1 = iVar2;
  return;
}

