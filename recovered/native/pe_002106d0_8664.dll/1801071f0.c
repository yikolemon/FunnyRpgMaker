/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801071f0 */

void FUN_1801071f0(int param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  size_t sVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  lVar1 = DAT_180419160;
  iVar4 = *(int *)(DAT_180419160 + 0x167c);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    *(int *)(DAT_180419160 + 0x16ac) = iVar4;
    *(uint *)(lVar1 + 0x16b0) = (uint)(*(int *)(lVar1 + 0x1fe0) != iVar4) + *(int *)(lVar1 + 4);
    *(undefined1 *)(lVar1 + 0x16b4) = *(undefined1 *)(lVar1 + 0x168c);
    *(bool *)(lVar1 + 0x16b5) = *(int *)(lVar1 + 0x1680) == iVar4;
    if (*(int *)(lVar1 + 0x26bc) == iVar4) {
      FUN_1801473ea(iVar4);
      iVar4 = *(int *)(lVar1 + 0x167c);
    }
    if ((*(longlong *)(lVar1 + 0x1628) != 0) &&
       (iVar4 == *(int *)(*(longlong *)(lVar1 + 0x1628) + 0xc4))) {
      if ((*(byte *)(lVar1 + 0x2acc) & 2) != 0) {
        FUN_1800fdfea("SetActiveID() cancel MovingWindow\n");
      }
      FUN_1801073dd();
      iVar4 = *(int *)(lVar1 + 0x167c);
    }
  }
  *(bool *)(lVar1 + 0x1688) = iVar4 != param_1;
  if (iVar4 != param_1) {
    if ((*(byte *)(lVar1 + 0x2acc) & 2) != 0) {
      if (*(longlong *)(lVar1 + 0x16a0) == 0) {
        puVar6 = &DAT_1803861e4;
      }
      else {
        puVar6 = *(undefined1 **)(*(longlong *)(lVar1 + 0x16a0) + 8);
      }
      if (param_2 == 0) {
        uVar2 = FUN_1801003e9(0,0x14);
        puVar5 = &DAT_1803861e4;
      }
      else {
        sVar3 = strlen(*(char **)(param_2 + 8));
        uVar2 = FUN_1801003e9(0,0x14 - (int)sVar3);
        puVar5 = *(undefined1 **)(param_2 + 8);
      }
      FUN_1800fdfea("SetActiveID() 0x%08X in \"%s\"%*s(previously 0x%08X in \"%s\")\n",param_1,
                    puVar5,uVar2,&DAT_1803861e4,iVar4,puVar6);
    }
    *(undefined4 *)(lVar1 + 0x1684) = 0;
    *(undefined2 *)(lVar1 + 0x168b) = 0;
    *(undefined1 *)(lVar1 + 0x168f) = 0xff;
    if (param_1 != 0) {
      *(int *)(lVar1 + 0x16c0) = param_1;
      *(undefined4 *)(lVar1 + 0x16c4) = 0;
    }
  }
  *(int *)(lVar1 + 0x167c) = param_1;
  *(undefined2 *)(lVar1 + 0x1689) = 0;
  *(longlong *)(lVar1 + 0x16a0) = param_2;
  *(undefined2 *)(lVar1 + 0x168d) = 0;
  *(undefined4 *)(lVar1 + 0x1690) = 0;
  if (param_1 != 0) {
    *(int *)(lVar1 + 0x1680) = param_1;
    if ((*(int *)(lVar1 + 0x2214) == param_1) || (uVar2 = 1, *(int *)(lVar1 + 0x23cc) == param_1)) {
      uVar2 = *(undefined4 *)(lVar1 + 0x2250);
    }
    *(undefined4 *)(lVar1 + 0x169c) = uVar2;
  }
  *(undefined4 *)(lVar1 + 0x1f90) = 0;
  *(undefined1 *)(lVar1 + 0x1f94) = 0;
  return;
}

