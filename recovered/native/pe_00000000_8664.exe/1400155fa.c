/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400155fa */

undefined8 FUN_1400155fa(longlong *param_1,longlong param_2)

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
    local_38 = (undefined8 *)FUN_1401887b0(0x10);
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
    *local_38 = std::codecvt<char,char,_Mbstatet>::vftable;
    *param_1 = (longlong)local_38;
    local_2a = 0;
    FUN_140013f0c(local_a0);
  }
  return 2;
}

