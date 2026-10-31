/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001d5b0 */

undefined4 __fastcall FUN_1001d5b0(int param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  undefined3 uVar6;
  undefined4 uVar5;
  
  uVar6 = 0;
  bVar4 = 0;
LAB_1001d5ba:
  bVar2 = bVar4;
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 < 0x5b) {
    switch(iVar1) {
    case 0x24:
      FUN_1001dc34();
      goto LAB_1001d72a;
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x2c:
    case 0x2d:
      break;
    case 0x28:
      goto switchD_1001d60e_caseD_28;
    case 0x29:
      if (*(int *)(param_1 + 0xc) != 0) {
LAB_1001d778:
        return CONCAT31(uVar6,bVar2);
      }
      if ((*(byte *)(param_1 + 0x3b) & 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1001d9e4(5);
      }
      break;
    case 0x2a:
      if ((byte)(~bVar2 & (*(byte *)(param_1 + 0x3b) & 2) >> 1) == 0)
      goto switchD_1001d60e_caseD_2b;
      break;
    case 0x2b:
      goto switchD_1001d60e_caseD_2b;
    case 0x2e:
      FUN_1001d9ee();
      goto LAB_1001d75a;
    default:
      if (iVar1 == -1) goto LAB_1001d778;
      if (iVar1 == 0x3f) goto switchD_1001d60e_caseD_2b;
    }
  }
  else if (iVar1 < 0x7b) {
    switch(iVar1) {
    case 0x5b:
      *(undefined1 *)(param_1 + 0x4c) = 1;
      FUN_1001d8ea();
      FUN_1001dae6();
      *(undefined1 *)(param_1 + 0x4c) = 0;
      FUN_1001db12(0x5d,4);
      goto LAB_1001d761;
    case 0x5c:
      FUN_1001d8ea();
      bVar4 = (*(byte *)(param_1 + 0x38) & 0x40) >> 6;
      if ((*(char *)(param_1 + 0x4d) == 'b' & bVar4) == 1) {
        FUN_1001d9f6();
      }
      else {
        if ((bVar4 & *(char *)(param_1 + 0x4d) == 'B') != 1) {
          FUN_1001da06();
          goto LAB_1001d761;
        }
        FUN_1001d9f6();
        FUN_1001d9fe();
      }
LAB_1001d72a:
      uVar5 = FUN_1001d8ea();
      uVar6 = (undefined3)((uint)uVar5 >> 8);
      bVar4 = 1;
      goto LAB_1001d5ba;
    case 0x5d:
      if ((*(byte *)(param_1 + 0x3b) & 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1001d9e4(4);
      }
      break;
    case 0x5e:
      if ((*(byte *)(param_1 + 0x3b) & bVar2) == 0) {
        FUN_1001dbd4();
        uVar5 = FUN_1001d8ea();
        uVar6 = (undefined3)((uint)uVar5 >> 8);
        bVar4 = 1;
        if (((*(byte *)(param_1 + 0x3b) & 2) == 0) ||
           (bVar2 != 0 || *(int *)(param_1 + 0x48) != 0x2a)) goto LAB_1001d5ba;
      }
    }
  }
  else {
    if (iVar1 != 0x7d) {
      if (iVar1 == 0x7c) goto LAB_1001d778;
      if (iVar1 != 0x7b) goto switchD_1001d5d5_default;
switchD_1001d60e_caseD_2b:
                    /* WARNING: Subroutine does not return */
      FUN_1001d9e4(10);
    }
    if ((*(byte *)(param_1 + 0x3b) & 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d9e4(6);
    }
  }
switchD_1001d5d5_default:
  FUN_1001dbdc((int)*(char *)(param_1 + 0x4d));
LAB_1001d75a:
  FUN_1001d8ea();
  goto LAB_1001d761;
switchD_1001d60e_caseD_28:
  FUN_1001d8ea();
  cVar3 = FUN_1001db2c();
  uVar5 = FUN_1001db12(0x29,5);
  uVar6 = (undefined3)((uint)uVar5 >> 8);
  bVar4 = 1;
  if (cVar3 != '\0') {
LAB_1001d761:
    uVar5 = FUN_1001dc3c();
    uVar6 = (undefined3)((uint)uVar5 >> 8);
    bVar4 = 1;
  }
  goto LAB_1001d5ba;
}

