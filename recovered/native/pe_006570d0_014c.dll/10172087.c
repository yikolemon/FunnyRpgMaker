/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10172087 */

undefined4 __fastcall FUN_10172087(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  *(int *)(param_1 + 0x18) = param_2;
  *(int *)(param_1 + 0x14) = param_2;
  *(int *)(param_1 + 0x1c) = param_2 + param_3;
  *(undefined4 *)(param_1 + 0x20) = 1;
  if ((param_4 != 0) && (iVar2 = FUN_10172180(), iVar2 == 0)) {
    return 0;
  }
  iVar2 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  do {
    if (iVar2 < 1) {
      FUN_10172a07();
      iVar2 = *(int *)(param_1 + 8);
    }
    uVar1 = *(uint *)(param_1 + 0x10);
    uVar4 = uVar1 >> 1;
    *(uint *)(param_1 + 0x10) = uVar4;
    iVar3 = iVar2 + -1;
    *(int *)(param_1 + 8) = iVar3;
    if (iVar2 < 3) {
      FUN_10172a07();
      iVar3 = *(int *)(param_1 + 8);
      uVar4 = *(uint *)(param_1 + 0x10);
    }
    *(uint *)(param_1 + 0x10) = uVar4 >> 2;
    *(int *)(param_1 + 8) = iVar3 + -2;
    uVar5 = 0;
    switch(uVar4 & 3) {
    case 0:
      iVar2 = FUN_101721ed();
      goto LAB_10172161;
    case 1:
      iVar2 = FUN_101722f3(0x120);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = FUN_101722f3(0x20);
      break;
    case 2:
      iVar2 = FUN_101724f6();
      break;
    case 3:
      goto switchD_10172110_caseD_3;
    }
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = FUN_1017279f();
LAB_10172161:
    if (iVar2 == 0) {
      return 0;
    }
    if ((uVar1 & 1) != 0) {
      uVar5 = 1;
switchD_10172110_caseD_3:
      return uVar5;
    }
    iVar2 = *(int *)(param_1 + 8);
  } while( true );
}

