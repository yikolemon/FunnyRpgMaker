/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b2294 */

void FUN_1400b2294(byte *param_1,undefined8 *param_2,ulonglong param_3,int *param_4,longlong param_5
                  )

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ushort *puVar4;
  ushort *puVar5;
  byte *pbVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  byte local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  puVar4 = (ushort *)*param_2;
  local_58 = param_5;
  puVar5 = puVar4;
  local_50 = param_4;
  if (param_1 != (byte *)0x0) {
    do {
      pbVar6 = local_48;
      if (3 < param_3) {
        pbVar6 = param_1;
      }
      uVar2 = FUN_1400a5910(pbVar6,(uint)*puVar5,local_50,local_58);
      if (uVar2 == 0xffffffffffffffff) {
        *param_2 = puVar4;
        goto LAB_1400b23c2;
      }
      if (pbVar6 != param_1) {
        if (param_3 < uVar2) goto LAB_1400b235a;
        FUN_1400b3550((undefined8 *)param_1,(undefined8 *)pbVar6,uVar2);
      }
      if (uVar2 != 0) {
        if (param_1[uVar2 - 1] == 0) goto LAB_1400b2354;
        puVar4 = puVar5 + 1;
      }
      param_3 = param_3 - uVar2;
      param_1 = param_1 + uVar2;
      puVar5 = puVar5 + 1;
    } while( true );
  }
  lVar3 = FUN_1400a5910(local_48,(uint)*puVar4,param_4,param_5);
  lVar1 = local_58;
  while ((lVar3 != -1 && ((lVar3 == 0 || (local_48[lVar3 + -1] != 0))))) {
    puVar4 = puVar4 + 1;
    lVar3 = FUN_1400a5910(local_48,(uint)*puVar4,param_4,lVar1);
  }
LAB_1400b23c2:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_40 ^ (ulonglong)auStack_78);
LAB_1400b2354:
  puVar4 = (ushort *)0x0;
LAB_1400b235a:
  *param_2 = puVar4;
  goto LAB_1400b23c2;
}

