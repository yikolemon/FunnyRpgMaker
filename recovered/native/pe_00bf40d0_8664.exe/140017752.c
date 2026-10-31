/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140017752 */

undefined8 FUN_140017752(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  char *pcVar3;
  int local_a0 [26];
  undefined8 *local_38;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    local_38 = (undefined8 *)FUN_1400863a0(0x30);
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 == 0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)(lVar1 + 0x30);
      if (*(char **)(lVar1 + 0x28) != (char *)0x0) {
        pcVar3 = *(char **)(lVar1 + 0x28);
      }
    }
    local_29 = 1;
    FUN_1400052f6(local_a0,pcVar3);
    puVar2 = local_38;
    local_2a = 1;
    *(undefined4 *)(local_38 + 1) = 0;
    *local_38 = std::ctype<char>::vftable;
    FUN_140088880((undefined4 *)(local_38 + 2));
    *param_1 = (longlong)puVar2;
    local_2a = 0;
    FUN_140005584(local_a0);
  }
  return 2;
}

