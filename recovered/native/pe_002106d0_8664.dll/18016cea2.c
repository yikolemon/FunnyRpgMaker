/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016cea2 */

void FUN_18016cea2(longlong param_1)

{
  uint uVar1;
  short *psVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  lVar4 = DAT_180419160;
  uVar1 = *(uint *)(param_1 + 0x6c);
  iVar5 = uVar1 * 0x10;
  if (*(int *)(DAT_180419160 + 0x2cdc) < iVar5) {
    psVar2 = (short *)FUN_1800fe7f8((longlong)iVar5);
    if (*(longlong *)(lVar4 + 0x2ce0) != 0) {
      FUN_1802a82f0(psVar2,*(longlong *)(lVar4 + 0x2ce0),(longlong)*(int *)(lVar4 + 0x2cd8));
      FUN_1800fe8d4(*(undefined8 *)(lVar4 + 0x2ce0));
    }
    *(short **)(lVar4 + 0x2ce0) = psVar2;
    *(int *)(lVar4 + 0x2cdc) = iVar5;
    uVar1 = *(uint *)(param_1 + 0x6c);
  }
  else {
    psVar2 = *(short **)(DAT_180419160 + 0x2ce0);
  }
  if (0 < (int)uVar1) {
    plVar3 = (longlong *)(psVar2 + 4);
    lVar4 = 0;
    do {
      *(short *)(plVar3 + -1) = (short)lVar4;
      *plVar3 = param_1;
      lVar4 = lVar4 + 1;
      uVar1 = *(uint *)(param_1 + 0x6c);
      plVar3 = plVar3 + 2;
    } while (lVar4 < (int)uVar1);
  }
  if (1 < uVar1) {
    FUN_180289570(psVar2,(longlong)(int)uVar1,0x10,&LAB_18016cf80);
    uVar1 = *(uint *)(param_1 + 0x6c);
  }
  if (0 < (int)uVar1) {
    lVar4 = 0;
    do {
      *(short *)(*(longlong *)(param_1 + 0x18) + 0x56 + (longlong)*psVar2 * 0x74) = (short)lVar4;
      lVar4 = lVar4 + 1;
      psVar2 = psVar2 + 8;
    } while (lVar4 < *(int *)(param_1 + 0x6c));
  }
  return;
}

