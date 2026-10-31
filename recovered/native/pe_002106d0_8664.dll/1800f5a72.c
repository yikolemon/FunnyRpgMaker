/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f5a72 */

void FUN_1800f5a72(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int *piVar6;
  uint *puVar7;
  longlong lVar8;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  char local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x148) == '\0') {
    *(undefined1 *)(lVar3 + 0x148) = 1;
  }
  *(longlong *)(lVar3 + 0x140) = param_1;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined8 *)(lVar4 + 0x150) = param_3;
  *(undefined1 *)(lVar4 + 0x158) = 1;
  (**(code **)(**(longlong **)(param_1 + 0xf8) + 8))(*(longlong **)(param_1 + 0xf8),param_3);
  lVar2 = param_1 + 0xa8;
  lVar1 = param_1 + 0x50;
  local_50 = param_1;
  do {
    local_38 = 0;
    local_40 = param_1;
    FUN_180044980(param_1);
    local_38 = '\x01';
    lVar8 = *(longlong *)(param_1 + 0x128) + -1;
    *(longlong *)(param_1 + 0x128) = lVar8;
    if (((*(char *)(param_1 + 0x141) == '\x01') && (lVar8 == 0)) &&
       (*(longlong *)(param_1 + 0x120) == 0)) {
      FUN_18023daf0(lVar2);
    }
    local_58 = *param_2;
    if (local_58 != 0) {
      piVar6 = (int *)FUN_1800188ac();
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    FUN_1800f5cf6(lVar1,&local_40,&local_58,param_1);
    if (*param_2 == 0) {
LAB_1800f5baa:
      FUN_1800f5f14(param_1,&local_48);
      *(longlong *)(local_50 + 0x128) = *(longlong *)(local_50 + 0x128) + 1;
      FUN_180021c7a(&local_40);
      (**(code **)(*local_48 + 8))();
      FUN_1800f4e94(&local_48);
      bVar5 = true;
      param_1 = local_50;
    }
    else {
      puVar7 = (uint *)FUN_1800188ac(*param_2 + 4);
      if ((*puVar7 & 1) == 0) goto LAB_1800f5baa;
      bVar5 = false;
    }
    if (local_38 == '\x01') {
      FUN_18023d6e0(local_40);
    }
    if (!bVar5) {
      (**(code **)(**(longlong **)(param_1 + 0xf0) + 8))(*(longlong **)(param_1 + 0xf0),param_3);
      *(undefined1 *)(lVar4 + 0x158) = 0;
      *(undefined1 *)(lVar3 + 0x148) = 0;
      return;
    }
  } while( true );
}

