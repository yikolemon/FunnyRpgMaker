/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022dac4 */

undefined8 FUN_14022dac4(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  undefined1 local_a0 [104];
  undefined8 *local_38;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    local_38 = (undefined8 *)FUN_14044ab00(0x30);
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 == 0) {
      pwVar3 = L"pNonPic";
    }
    else {
      pwVar3 = (wchar_t *)(lVar1 + 0x30);
      if (*(wchar_t **)(lVar1 + 0x28) != (wchar_t *)0x0) {
        pwVar3 = *(wchar_t **)(lVar1 + 0x28);
      }
    }
    local_29 = 1;
    FUN_14021e2ba(local_a0,pwVar3);
    puVar2 = local_38;
    local_2a = 1;
    *(undefined4 *)(local_38 + 1) = 0;
    *local_38 = &DAT_1404c27b8;
    FUN_14044f440(local_38 + 2);
    *param_1 = (longlong)puVar2;
    local_2a = 0;
    FUN_14021e4e6(local_a0);
  }
  return 2;
}

