/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10092de8 */

undefined4 __fastcall FUN_10092de8(int param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  undefined3 uVar6;
  undefined4 uVar5;
  
  uVar6 = 0;
  bVar4 = 0;
LAB_10092df2:
  bVar2 = bVar4;
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 < 0x5b) {
    switch(iVar1) {
    case 0x24:
      FUN_1001dc34();
      goto LAB_10092f65;
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x2c:
    case 0x2d:
      break;
    case 0x28:
      goto switchD_10092e46_caseD_28;
    case 0x29:
      if (*(int *)(param_1 + 0xc) != 0) {
LAB_10092fb3:
        return CONCAT31(uVar6,bVar2);
      }
      if ((*(byte *)(param_1 + 0x3b) & 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1001d9e4(5);
      }
      break;
    case 0x2a:
      if ((byte)(~bVar2 & (*(byte *)(param_1 + 0x3b) & 2) >> 1) == 0)
      goto switchD_10092e46_caseD_2b;
      break;
    case 0x2b:
      goto switchD_10092e46_caseD_2b;
    case 0x2e:
      FUN_1001d9ee();
      goto LAB_10092f95;
    default:
      if (iVar1 == -1) goto LAB_10092fb3;
      if (iVar1 == 0x3f) goto switchD_10092e46_caseD_2b;
    }
  }
  else if (iVar1 < 0x7b) {
    switch(iVar1) {
    case 0x5b:
      *(undefined1 *)(param_1 + 0x4c) = 1;
      FUN_1009301c();
      FUN_1009312c();
      *(undefined1 *)(param_1 + 0x4c) = 0;
      FUN_10093158(0x5d,4);
      goto LAB_10092f9c;
    case 0x5c:
      FUN_1009301c();
      bVar4 = (*(byte *)(param_1 + 0x38) & 0x40) >> 6;
      if ((*(short *)(param_1 + 0x4e) == 0x62 & bVar4) == 1) {
        FUN_1001d9f6();
      }
      else {
        if ((bVar4 & *(short *)(param_1 + 0x4e) == 0x42) != 1) {
          FUN_10093048();
          goto LAB_10092f9c;
        }
        FUN_1001d9f6();
        FUN_1001d9fe();
      }
LAB_10092f65:
      uVar5 = FUN_1009301c();
      uVar6 = (undefined3)((uint)uVar5 >> 8);
      bVar4 = 1;
      goto LAB_10092df2;
    case 0x5d:
      if ((*(byte *)(param_1 + 0x3b) & 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1001d9e4(4);
      }
      break;
    case 0x5e:
      if ((*(byte *)(param_1 + 0x3b) & bVar2) == 0) {
        FUN_1001dbd4();
        uVar5 = FUN_1009301c();
        uVar6 = (undefined3)((uint)uVar5 >> 8);
        bVar4 = 1;
        if (((*(byte *)(param_1 + 0x3b) & 2) == 0) ||
           (bVar2 != 0 || *(int *)(param_1 + 0x48) != 0x2a)) goto LAB_10092df2;
      }
    }
  }
  else {
    if (iVar1 != 0x7d) {
      if (iVar1 == 0x7c) goto LAB_10092fb3;
      if (iVar1 != 0x7b) goto switchD_10092e0d_default;
switchD_10092e46_caseD_2b:
                    /* WARNING: Subroutine does not return */
      FUN_1001d9e4(10);
    }
    if ((*(byte *)(param_1 + 0x3b) & 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d9e4(6);
    }
  }
switchD_10092e0d_default:
  FUN_1009321a(*(undefined2 *)(param_1 + 0x4e));
LAB_10092f95:
  FUN_1009301c();
  goto LAB_10092f9c;
switchD_10092e46_caseD_28:
  FUN_1009301c();
  cVar3 = FUN_10093172();
  uVar5 = FUN_10093158(0x29,5);
  uVar6 = (undefined3)((uint)uVar5 >> 8);
  bVar4 = 1;
  if (cVar3 != '\0') {
LAB_10092f9c:
    uVar5 = FUN_10093274();
    uVar6 = (undefined3)((uint)uVar5 >> 8);
    bVar4 = 1;
  }
  goto LAB_10092df2;
}

