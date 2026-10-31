/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027bc84 */

ulonglong FUN_18027bc84(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  do {
    pbVar2 = *(byte **)(param_1 + 0x10);
    if (pbVar2 == *(byte **)(param_1 + 8)) {
      return 0xffffffff;
    }
    bVar1 = *pbVar2;
    *(byte **)(param_1 + 0x10) = pbVar2 + 1;
    iVar3 = FUN_1802784ec((ulonglong)bVar1,8,param_2);
  } while (iVar3 != 0);
  return (ulonglong)bVar1;
}

