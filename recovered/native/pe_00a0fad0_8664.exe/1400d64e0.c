/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d64e0 */

ulonglong FUN_1400d64e0(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (((byte *)**(undefined8 **)(lVar1 + 0x38) == (byte *)0x0) || (**(int **)(lVar1 + 0x50) < 1))
    {
      uVar2 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      uVar2 = (ulonglong)*(byte *)**(undefined8 **)(lVar1 + 0x38);
    }
    if ((int)uVar2 != -1) {
      *(char *)((longlong)param_1 + 9) = (char)uVar2;
      *(undefined1 *)(param_1 + 1) = 1;
      return uVar2;
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return (ulonglong)*(byte *)((longlong)param_1 + 9);
}

