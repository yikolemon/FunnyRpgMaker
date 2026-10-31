/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140188a20 */

void tls_callback_0(undefined8 param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
  
  if ((param_2 == 3) || (param_2 == 0)) {
    puVar3 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x30)
    ;
    puVar4 = (uint *)*puVar3;
    if (puVar4 != (uint *)0x0) {
      while( true ) {
        uVar1 = *puVar4;
        while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
          if (*(longlong *)(puVar4 + (ulonglong)uVar1 * 2 + 4) != 0) {
            (*(code *)PTR__guard_dispatch_icall_140ee15d0)();
          }
        }
        puVar2 = *(uint **)(puVar4 + 2);
        if (puVar2 == (uint *)0x0) break;
        thunk_FUN_1401aea30(puVar4);
        *puVar3 = puVar2;
        puVar4 = puVar2;
      }
      *puVar3 = 0;
    }
  }
  return;
}

