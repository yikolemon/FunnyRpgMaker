/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009ef70 */

ulonglong FUN_14009ef70(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,
                       byte *param_5,int param_6,undefined8 param_7,byte param_8)

{
  ulonglong uVar1;
  PVOID pvVar2;
  
  uVar1 = FUN_14009f9b0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  pvVar2 = FUN_14009d690();
  *(undefined4 *)((longlong)pvVar2 + 0x78) = 0xfffffffe;
  return uVar1 & 0xffffffff;
}

