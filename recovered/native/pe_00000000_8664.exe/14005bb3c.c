/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005bb3c */

undefined8 FUN_14005bb3c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined *puVar2;
  undefined1 local_a0 [104];
  undefined8 *local_38;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    local_38 = (undefined8 *)FUN_1401887b0(0x30);
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 == 0) {
      puVar2 = &DAT_140edcdbf;
    }
    else {
      puVar2 = (undefined *)(lVar1 + 0x30);
      if (*(undefined **)(lVar1 + 0x28) != (undefined *)0x0) {
        puVar2 = *(undefined **)(lVar1 + 0x28);
      }
    }
    local_29 = 1;
    FUN_140013ce0(local_a0,puVar2);
    *(undefined4 *)(local_38 + 1) = 0;
    *local_38 = std::numpunct<wchar_t>::vftable;
    local_2a = 1;
    FUN_14005bc6a(local_38,local_a0,1);
    *param_1 = (longlong)local_38;
    local_2a = 0;
    FUN_140013f0c(local_a0);
  }
  return 4;
}

