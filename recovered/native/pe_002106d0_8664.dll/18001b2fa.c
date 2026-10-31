/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001b2fa */

void FUN_18001b2fa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  if (*(int *)(*(longlong *)(param_1 + 0x78) + 0xc + (ulonglong)*(uint *)(param_2 + 0x30) * 0x18) ==
      0) {
    lVar1 = *(longlong *)(param_1 + 0x78) + (ulonglong)*(uint *)(param_2 + 0x30) * 0x18;
    if (((*(byte *)(param_1 + 0xe0) & 0x3e) == 0) &&
       (cVar2 = FUN_18001bcf0(param_1,*(undefined8 *)(param_2 + 0x10),lVar1), cVar2 != '\0')) {
      return;
    }
    *(int *)(lVar1 + 0xc) =
         (int)((ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10)) >> 4);
  }
  return;
}

