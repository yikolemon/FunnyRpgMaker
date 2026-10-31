/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404aa634 */

undefined8 FUN_1404aa634(uint param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_140632cd0)) {
    if (*(longlong *)
         ((&DAT_1406328d0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
         (ulonglong)(param_1 & 0x3f) * 0x48) == -1) {
      iVar1 = FUN_1404b7e50();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          uVar3 = 0xfffffff6;
        }
        else if (param_1 == 1) {
          uVar3 = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1404aa6b5;
          uVar3 = 0xfffffff4;
        }
        (*(code *)s_IsProcessorFeaturePresent_14059e1c0._16_8_)(uVar3,param_2);
      }
LAB_1404aa6b5:
      *(undefined8 *)
       ((&DAT_1406328d0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
       (ulonglong)(param_1 & 0x3f) * 0x48) = param_2;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_14048fb3c();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_14048fb60();
  *puVar2 = 0;
  return 0xffffffff;
}

