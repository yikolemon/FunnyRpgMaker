/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000a191 */

void FUN_14000a191(char *param_1)

{
  size_t sVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  sVar1 = strlen(param_1);
  uVar3 = sVar1 + 1;
  puVar2 = _calloc_base(uVar3,1);
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_140086a90();
  }
  if (uVar3 != 0) {
    FUN_1400b3550(puVar2,(undefined8 *)param_1,uVar3);
    return;
  }
  return;
}

