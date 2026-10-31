/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b4880 */

undefined4 FUN_1400b4880(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  PVOID pvVar4;
  
  *(undefined8 *)(param_2 + 0x48) = param_1;
  pvVar4 = FUN_14009d690();
  *(undefined8 *)((longlong)pvVar4 + 0x70) = *(undefined8 *)(param_2 + 0x80);
  puVar1 = *(ulonglong **)(param_2 + 0x98);
  uVar2 = puVar1[1];
  pvVar4 = FUN_14009d690();
  *(ulonglong *)((longlong)pvVar4 + 0x60) = uVar2;
  uVar3 = *(undefined8 *)(**(longlong **)(param_2 + 0x48) + 0x38);
  pvVar4 = FUN_14009d690();
  *(undefined8 *)((longlong)pvVar4 + 0x68) = uVar3;
  FUN_14009ef60((int *)**(undefined8 **)(param_2 + 0x48),*(longlong **)(param_2 + 0x88),
                *(ULONG_PTR *)(param_2 + 0x90),puVar1,*(uint **)(param_2 + 0xa0),0,0,1);
  pvVar4 = FUN_14009d690();
  *(undefined8 *)((longlong)pvVar4 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x40) = 1;
  *(undefined4 *)(param_2 + 0x44) = 1;
  return *(undefined4 *)(param_2 + 0x44);
}

