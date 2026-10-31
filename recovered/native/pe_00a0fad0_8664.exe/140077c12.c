/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140077c12 */

undefined2 FUN_140077c12(undefined8 param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined1 local_258 [144];
  longlong local_1c8;
  short local_148 [8];
  undefined1 local_138 [30];
  undefined2 local_11a;
  wchar_t *local_48;
  undefined8 local_40;
  undefined1 local_38 [32];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_140078b7e(local_258,param_2,0x20,0x40,1);
  if (local_1c8 == 0) {
    local_48 = L"Failed to open file: {}";
    local_40 = 0x17;
    FUN_140052dd3(local_38,&local_48,param_2);
    FUN_140052d74(local_148,&DAT_1401cc978,local_38);
    FUN_140052e4f(local_138);
    FUN_140052e84(local_148);
    FUN_140005242(local_38);
    uVar1 = 0;
  }
  else {
    FUN_140078bd6(local_258,local_148,0x40);
    FUN_140078d3e(local_258);
    uVar1 = local_11a;
    if (local_148[0] != 0x5844) {
      uVar1 = 0;
    }
  }
  FUN_14003e690(local_258);
  return uVar1;
}

