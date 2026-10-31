/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140004097 */

ulonglong FUN_140004097(void)

{
  undefined1 uVar1;
  undefined8 unaff_RBX;
  undefined1 local_68 [8];
  undefined1 local_60 [32];
  undefined1 local_40 [36];
  DWORD local_1c;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_1c = GetCurrentProcessId();
  FUN_14000ef41(local_68);
  uVar1 = FUN_14001014c(local_60,local_40);
  FUN_140005242(local_40);
  FUN_140005242(local_60);
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff;
}

