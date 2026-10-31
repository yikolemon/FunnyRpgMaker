/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ce129 */

ulonglong FUN_1800ce129(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 ****ppppuVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong unaff_R13;
  undefined1 local_98 [48];
  undefined8 ***local_68 [2];
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  puVar4 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  iVar1 = FUN_18027ff28(puVar4,local_98);
  if (iVar1 == 0) {
    unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8),1);
  }
  else {
    uVar5 = param_1[2];
    if (uVar5 == 0) {
      unaff_R13 = 0;
    }
    else {
      uVar6 = 0;
      do {
        puVar4 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar4 = (undefined8 *)*param_1;
        }
        lVar2 = FUN_1800ce2f3(puVar4,uVar5,uVar6,&DAT_1802bb328,2);
        if (lVar2 == -1) {
          lVar2 = param_1[2];
        }
        FUN_180073262(local_68,param_1,0,lVar2,local_98);
        if (local_58 == 2) {
          ppppuVar3 = local_68;
          if (0xf < local_50) {
            ppppuVar3 = (undefined8 ****)local_68[0];
          }
          if (*(char *)((longlong)ppppuVar3 + 1) == ':') {
            FUN_180003bf2(local_68,0x5c);
            lVar2 = lVar2 + 1;
            goto LAB_1800ce202;
          }
code_r0x0001800ce208:
          ppppuVar3 = local_68;
          if (0xf < local_50) {
            ppppuVar3 = (undefined8 ****)local_68[0];
          }
          iVar1 = FUN_18027ff28(ppppuVar3,local_98);
          if (iVar1 == 0) goto LAB_1800ce240;
          ppppuVar3 = local_68;
          if (0xf < local_50) {
            ppppuVar3 = (undefined8 ****)local_68[0];
          }
          iVar1 = FUN_18027f8fc(ppppuVar3);
          if (iVar1 == 0) goto LAB_1800ce240;
          unaff_R13 = 0;
        }
        else {
LAB_1800ce202:
          if (local_58 != 0) goto code_r0x0001800ce208;
LAB_1800ce240:
          uVar6 = lVar2 + 1;
          unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8),1);
        }
        FUN_180001ef2(local_68);
        uVar5 = param_1[2];
      } while (((byte)unaff_R13 & uVar6 < uVar5) != 0);
    }
  }
  return unaff_R13 & 0xffffffff;
}

