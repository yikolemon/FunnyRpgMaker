/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023ebf0 */

undefined8 FUN_18023ebf0(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  piVar3 = *(int **)(lVar1 + 0x30);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)(lVar1 + 0x40);
  }
  else {
    iVar2 = *piVar3;
    if (iVar2 != 0x1e) goto LAB_18023ec68;
    piVar3 = (int *)_malloc_base(0x100);
    thunk_FUN_180290e40(0);
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(lVar1 + 0x30);
  }
  iVar2 = 0;
  *(int **)(lVar1 + 0x30) = piVar3;
  *piVar3 = 0;
LAB_18023ec68:
  *(undefined8 *)(piVar3 + (longlong)iVar2 * 2 + 4) = param_1;
  *piVar3 = *piVar3 + 1;
  return 0;
}

