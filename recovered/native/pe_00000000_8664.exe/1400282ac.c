/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400282ac */

undefined8
FUN_1400282ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int param_5,longlong param_6)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 *local_270;
  ulonglong local_268;
  ulonglong local_260;
  code *local_258;
  undefined1 local_250 [504];
  undefined1 *local_58;
  ulonglong local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*(longlong *)(param_6 + 0x30) == 0) {
    FUN_14001b052(&local_270,param_2);
    puVar1 = local_270;
    local_270 = (undefined1 *)CONCAT71(local_270._1_7_,0x30);
    FUN_14001f365(param_1,puVar1,param_5,&local_270);
  }
  else {
    local_270 = local_250;
    local_268 = 0;
    local_258 = FUN_14001d464;
    local_260 = 500;
    FUN_14001b052(local_48,&local_270);
    if (0 < param_5) {
      iVar3 = 0;
      do {
        uVar2 = local_268 + 1;
        if (local_260 < uVar2) {
          (*local_258)(&local_270);
          uVar2 = local_268 + 1;
        }
        local_270[local_268] = 0x30;
        iVar3 = iVar3 + 1;
        local_268 = uVar2;
      } while (iVar3 != param_5);
    }
    local_58 = local_270;
    local_50 = local_268;
    FUN_14001deb6(param_6,param_1,param_2);
    if (local_270 != local_250) {
      thunk_FUN_1401aea30();
    }
  }
  return param_1;
}

