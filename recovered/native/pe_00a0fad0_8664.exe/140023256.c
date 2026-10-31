/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140023256 */

undefined8 FUN_140023256(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_a0 [104];
  undefined8 *local_38;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    local_38 = (undefined8 *)FUN_1400d3680(0x10);
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 == 0) {
      puVar2 = &DAT_1401728de;
    }
    else {
      puVar2 = (undefined1 *)(lVar1 + 0x30);
      if (*(undefined1 **)(lVar1 + 0x28) != (undefined1 *)0x0) {
        puVar2 = *(undefined1 **)(lVar1 + 0x28);
      }
    }
    local_29 = 1;
    FUN_140007eca(local_a0,puVar2);
    *(undefined4 *)(local_38 + 1) = 0;
    *local_38 = std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vftable;
    *param_1 = (longlong)local_38;
    local_2a = 0;
    FUN_1400080f6(local_a0);
  }
  return 4;
}

