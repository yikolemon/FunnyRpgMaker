/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140026c42 */

undefined8
FUN_140026c42(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,int param_5,
             longlong param_6)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 *local_268;
  ulonglong local_260;
  ulonglong local_258;
  code *local_250;
  undefined1 local_248 [504];
  undefined1 *local_50;
  ulonglong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*(longlong *)(param_6 + 0x30) == 0) {
    FUN_140019fc2(param_2,param_3,param_4 + param_3);
    local_268 = (undefined1 *)CONCAT71(local_268._1_7_,0x30);
    FUN_14001f365(param_1,param_2,param_5);
  }
  else {
    local_268 = local_248;
    local_260 = 0;
    local_250 = FUN_14001d464;
    local_258 = 500;
    FUN_140019fc2(&local_268,param_3,param_4 + param_3);
    if (0 < param_5) {
      iVar2 = 0;
      do {
        uVar1 = local_260 + 1;
        if (local_258 < uVar1) {
          (*local_250)(&local_268);
          uVar1 = local_260 + 1;
        }
        local_268[local_260] = 0x30;
        iVar2 = iVar2 + 1;
        local_260 = uVar1;
      } while (iVar2 != param_5);
    }
    local_50 = local_268;
    local_48 = local_260;
    FUN_14001deb6(param_6,param_1,param_2);
    if (local_268 != local_248) {
      thunk_FUN_1401aea30();
    }
  }
  return param_1;
}

