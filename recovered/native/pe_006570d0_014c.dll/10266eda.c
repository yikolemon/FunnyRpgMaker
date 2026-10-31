/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10266eda */

undefined4 __fastcall FUN_10266eda(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_3c [28];
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  undefined4 local_c;
  char local_5;
  
  local_c = 0;
  puStack_1c = &local_c;
  local_5 = '\0';
  uVar2 = *(undefined4 *)(param_1 + 0x68);
  FUN_10266fae(auStack_3c,param_1 + 8,*(undefined4 *)(param_1 + 0x30),
               *(undefined4 *)(param_1 + 0x34),&local_5);
  iVar1 = FUN_10267448(uVar2);
  if ((local_5 == '\0') || (iVar1 == 1)) {
    uVar2 = 0;
  }
  else if (*(char *)(param_1 + 0x2e) == '\0') {
    puStack_1c = &local_c;
    uStack_20 = 0x10266f3a;
    uVar2 = FUN_102674d2();
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

