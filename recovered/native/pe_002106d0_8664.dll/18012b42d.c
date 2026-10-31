/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012b42d */

void FUN_18012b42d(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  
  lVar2 = DAT_180419160;
  iVar5 = *(int *)(DAT_180419160 + 0x2ad0) + -1 + (uint)(*(int *)(DAT_180419160 + 0x2ad0) == 0);
  lVar1 = DAT_180419160 + 0x2ad0;
  if (*(char *)(DAT_180419160 + 0x20) == '\0') {
    FUN_1801000fa(lVar1,"[%05d] ",*(undefined4 *)(DAT_180419160 + 4));
  }
  else {
    FUN_1801000fa(lVar1,&DAT_18037bb88,DAT_180419160 + 0x20);
  }
  FUN_18010014e(lVar1,param_1,param_2);
  puVar4 = *(undefined **)(lVar2 + 0x2ad8);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = &DAT_180419168;
  }
  FUN_180100266(lVar2 + 0x2ae0,puVar4,iVar5,
                *(int *)(lVar2 + 0x2ad0) + -1 + (uint)(*(int *)(lVar2 + 0x2ad0) == 0));
  puVar4 = *(undefined **)(lVar2 + 0x2ad8);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = &DAT_180419168;
  }
  uVar3 = *(uint *)(lVar2 + 0x2acc);
  if ((uVar3 >> 0x14 & 1) != 0) {
    FUN_18012b539("%s",puVar4 + iVar5);
    uVar3 = *(uint *)(lVar2 + 0x2acc);
  }
  if ((uVar3 >> 0x15 & 1) == 0) {
    return;
  }
  OutputDebugStringA("[imgui] ");
                    /* WARNING: Could not recover jumptable at 0x00018012b536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OutputDebugStringA(puVar4 + iVar5);
  return;
}

