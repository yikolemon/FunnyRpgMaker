/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10266f42 */

undefined4 __fastcall FUN_10266f42(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [28];
  undefined4 uStack_24;
  undefined8 *puStack_20;
  undefined8 local_14;
  char local_5;
  
  puStack_20 = &local_14;
  local_5 = '\0';
  local_14 = 0;
  uVar2 = *(undefined4 *)(param_1 + 0x68);
  FUN_10266fae(auStack_40,param_1 + 8,*(undefined4 *)(param_1 + 0x30),
               *(undefined4 *)(param_1 + 0x34),&local_5);
  iVar1 = FUN_10267507(uVar2);
  if ((local_5 == '\0') || (iVar1 == 1)) {
    uVar2 = 0;
  }
  else if (*(char *)(param_1 + 0x2e) == '\0') {
    puStack_20 = &local_14;
    uStack_24 = 0x10266fa6;
    uVar2 = FUN_10267591();
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

