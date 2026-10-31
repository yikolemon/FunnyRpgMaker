/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a435d */

void FUN_1400a435d(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  
  lVar2 = DAT_140f2a910;
  iVar5 = *(int *)(DAT_140f2a910 + 0x2ad0) + -1 + (uint)(*(int *)(DAT_140f2a910 + 0x2ad0) == 0);
  lVar1 = DAT_140f2a910 + 0x2ad0;
  if (*(char *)(DAT_140f2a910 + 0x20) == '\0') {
    FUN_1400793b6(lVar1,&DAT_140edacc8,*(undefined4 *)(DAT_140f2a910 + 4));
  }
  else {
    FUN_1400793b6(lVar1,&DAT_140edacc3,DAT_140f2a910 + 0x20);
  }
  FUN_14007940a(lVar1,param_1,param_2);
  puVar4 = *(undefined **)(lVar2 + 0x2ad8);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = &DAT_140f2a918;
  }
  FUN_140079522(lVar2 + 0x2ae0,puVar4,iVar5,
                *(int *)(lVar2 + 0x2ad0) + -1 + (uint)(*(int *)(lVar2 + 0x2ad0) == 0));
  puVar4 = *(undefined **)(lVar2 + 0x2ad8);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = &DAT_140f2a918;
  }
  uVar3 = *(uint *)(lVar2 + 0x2acc);
  if ((uVar3 >> 0x14 & 1) != 0) {
    FUN_1400a4469("%s",puVar4 + iVar5);
    uVar3 = *(uint *)(lVar2 + 0x2acc);
  }
  if ((uVar3 >> 0x15 & 1) == 0) {
    return;
  }
  OutputDebugStringA("[imgui] ");
                    /* WARNING: Could not recover jumptable at 0x0001400a4466. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OutputDebugStringA(puVar4 + iVar5);
  return;
}

