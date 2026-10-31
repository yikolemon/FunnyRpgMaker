/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140107ba0 */

/* Library Function - Single Match
    __DestructExceptionObject
   
   Library: Visual Studio 2019 Release */

void __DestructExceptionObject(int *param_1)

{
  byte *pbVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[6] == 4)) &&
     ((param_1[8] + 0xe66cfae0U < 3 && (pbVar1 = *(byte **)(param_1 + 0xc), pbVar1 != (byte *)0x0)))
     ) {
    if (*(int *)(pbVar1 + 4) == 0) {
      if (((*pbVar1 & 0x10) != 0) && (**(longlong **)(param_1 + 10) != 0)) {
        (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
    }
    else {
      FUN_140107c20(*(undefined8 *)(param_1 + 10),
                    (longlong)*(int *)(pbVar1 + 4) + *(longlong *)(param_1 + 0xe));
    }
  }
  return;
}

