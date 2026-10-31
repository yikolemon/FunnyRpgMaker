/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180177b81 */

undefined8 FUN_180177b81(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if ((param_2 != 0) && (iVar2 = FUN_180177c9d(param_1), iVar2 == 0)) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar2 = 0;
  do {
    if (iVar2 < 1) {
      FUN_180178653(param_1);
      iVar2 = *(int *)(param_1 + 0x10);
    }
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar4 = uVar1 >> 1;
    *(uint *)(param_1 + 0x18) = uVar4;
    iVar3 = iVar2 + -1;
    *(int *)(param_1 + 0x10) = iVar3;
    if (iVar2 < 3) {
      FUN_180178653(param_1);
      iVar3 = *(int *)(param_1 + 0x10);
      uVar4 = *(uint *)(param_1 + 0x18);
    }
    *(uint *)(param_1 + 0x18) = uVar4 >> 2;
    *(int *)(param_1 + 0x10) = iVar3 + -2;
    uVar5 = 0;
    switch(uVar4 & 3) {
    case 0:
      iVar2 = FUN_180177d27(param_1);
      goto LAB_180177c6f;
    case 1:
      iVar2 = FUN_180177e62(param_1 + 0x3c,&DAT_1802e08b0,0x120);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = FUN_180177e62(param_1 + 0x820,&DAT_1802e09d0,0x20);
      break;
    case 2:
      iVar2 = FUN_180178096(param_1);
      break;
    case 3:
      goto switchD_180177c27_caseD_3;
    }
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = FUN_180178383(param_1);
LAB_180177c6f:
    if (iVar2 == 0) {
      return 0;
    }
    if ((uVar1 & 1) != 0) {
      uVar5 = 1;
switchD_180177c27_caseD_3:
      return uVar5;
    }
    iVar2 = *(int *)(param_1 + 0x10);
  } while( true );
}

