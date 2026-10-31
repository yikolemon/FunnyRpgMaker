/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400089a2 */

undefined8 FUN_1400089a2(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char *pcVar2;
  int local_a0 [26];
  undefined8 *local_38;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    local_38 = (undefined8 *)FUN_1400863a0(0x10);
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 == 0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)(lVar1 + 0x30);
      if (*(char **)(lVar1 + 0x28) != (char *)0x0) {
        pcVar2 = *(char **)(lVar1 + 0x28);
      }
    }
    local_29 = 1;
    FUN_1400052f6(local_a0,pcVar2);
    *(undefined4 *)(local_38 + 1) = 0;
    *local_38 = std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>
                ::vftable;
    *param_1 = (longlong)local_38;
    local_2a = 0;
    FUN_140005584(local_a0);
  }
  return 4;
}

