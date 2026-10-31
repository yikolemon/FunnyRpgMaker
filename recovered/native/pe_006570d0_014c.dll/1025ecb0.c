/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025ecb0 */

undefined4 __fastcall FUN_1025ecb0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *local_8;
  
  local_8 = param_1;
  local_8 = (undefined4 *)GetLastError();
  if (*(char *)(param_1 + 2) == '\0') {
    param_1[1] = 0;
    uVar1 = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  else {
    uVar1 = param_1[1];
  }
  uVar1 = FUN_102744ee(&local_8,uVar1);
  *param_1 = uVar1;
  SetLastError((DWORD)local_8);
  return uVar1;
}

