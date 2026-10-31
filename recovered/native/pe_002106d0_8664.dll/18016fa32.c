/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016fa32 */

undefined8 * FUN_18016fa32(undefined8 *param_1,undefined8 *****param_2)

{
  undefined8 ****ppppuVar1;
  int *piVar2;
  undefined8 ***pppuVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *****pppppuVar6;
  undefined4 *puVar7;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar8;
  undefined4 *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 ****local_68;
  undefined8 ***pppuStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  undefined8 ****local_48;
  undefined8 ***pppuStack_40;
  ulonglong local_38;
  ulonglong uStack_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  local_20 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  local_68 = (undefined8 *****)0x0;
  pppuStack_60 = (undefined8 ****)0x0;
  local_58 = 0;
  uStack_50 = 0xf;
  pppuStack_40 = param_2[2];
  local_48 = param_2;
  if ((undefined8 ****)0xf < param_2[3]) {
    local_48 = *param_2;
  }
  local_28 = param_1;
  cVar4 = FUN_1800182d2(&local_48,"data:image/png;base64,");
  if (cVar4 != '\0') {
    puVar7 = &local_88;
    pppppuVar6 = &local_48;
    FUN_180073262(puVar7,param_2,0x16,0xffffffffffffffff,&local_48);
    uVar8 = (undefined4)((ulonglong)pppppuVar6 >> 0x20);
    if (0xf < local_70) {
      puVar7 = (undefined4 *)CONCAT44(uStack_84,local_88);
    }
    local_90 = local_78;
    local_98 = puVar7;
    FUN_180173792(&local_48);
    FUN_180004c8c(&local_68);
    local_58 = local_38;
    uStack_50 = uStack_30;
    local_68 = local_48;
    pppuStack_60 = pppuStack_40;
    local_38 = 0;
    uStack_30 = 0xf;
    local_48 = (undefined8 ****)((ulonglong)local_48 & 0xffffffffffffff00);
    FUN_180001ef2(&local_48);
    FUN_180001ef2(&local_88);
  }
  local_88 = 0;
  local_98 = (undefined4 *)((ulonglong)local_98 & 0xffffffff00000000);
  pppppuVar6 = (undefined8 *****)local_68;
  if (uStack_50 < 0x10) {
    pppppuVar6 = &local_68;
  }
  lVar5 = FUN_18016fc8d(pppppuVar6,local_58 & 0xffffffff,&local_88,&local_98);
  if (lVar5 != 0) {
    FUN_18016fd04(&DAT_18041f140,&local_48,lVar5,local_88,CONCAT44(uVar8,local_98._0_4_));
    FUN_180022ada(local_28,&local_48);
    pppuVar3 = pppuStack_40;
    if ((undefined8 ****)pppuStack_40 != (undefined8 ****)0x0) {
      LOCK();
      ppppuVar1 = (undefined8 ****)(pppuStack_40 + 1);
      *(int *)ppppuVar1 = *(int *)ppppuVar1 + -1;
      UNLOCK();
      if (*(int *)ppppuVar1 == 0) {
        (*(code *)**pppuStack_40)(pppuStack_40);
        LOCK();
        piVar2 = (int *)((longlong)pppuVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pppuVar3)[1])(pppuVar3);
        }
      }
    }
    FUN_18012be82(lVar5);
  }
  FUN_180001ef2(&local_68);
  return local_28;
}

