/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404aa578 */

undefined8 FUN_1404aa578(uint param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_140632cd0)) {
    uVar2 = (ulonglong)(param_1 & 0x3f);
    if (((*(byte *)((&DAT_1406328d0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 + uVar2 * 0x48)
         & 1) != 0) &&
       (*(longlong *)
         ((&DAT_1406328d0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) != -1)) {
      iVar1 = FUN_1404b7e50();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          uVar4 = 0xfffffff6;
        }
        else if (param_1 == 1) {
          uVar4 = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1404aa5f8;
          uVar4 = 0xfffffff4;
        }
        (*(code *)s_IsProcessorFeaturePresent_14059e1c0._16_8_)(uVar4,0);
      }
LAB_1404aa5f8:
      *(undefined8 *)
       ((&DAT_1406328d0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) =
           0xffffffffffffffff;
      return 0;
    }
  }
  puVar3 = (undefined4 *)FUN_14048fb3c();
  *puVar3 = 9;
  puVar3 = (undefined4 *)FUN_14048fb60();
  *puVar3 = 0;
  return 0xffffffff;
}

