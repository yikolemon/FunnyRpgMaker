/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a11f0 */

void FUN_1400a11f0(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5
                  )

{
  longlong lVar1;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_140142c48 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_14013bd58;
    puStack_28 = PTR_DAT_14013bd60;
  }
  FUN_1400a1080(param_1,param_2,param_3,param_4,param_5,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar1 = FUN_14008f040(local_48);
    *(undefined4 *)(lVar1 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar1 = FUN_14008f040(local_48);
    *(undefined4 *)(lVar1 + 0x24) = local_14;
  }
  return;
}

