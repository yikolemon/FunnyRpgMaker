/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400fde3b */

void FUN_1400fde3b(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar4;
  ulonglong uVar3;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  cVar2 = FUN_1400c51fb("Multi-component Widgets");
  if (cVar2 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x827,"Widgets/Multi-component Widgets");
    thunk_FUN_1400af8bf("ImGuiSliderFlags_ColorMarkers",&DAT_140f3142c,0x1000);
    FUN_1400b1021("2-wide");
    FUN_1400bef9a("input float2",&DAT_140f18150,"%.3f",0);
    FUN_1400bf0cc("input int2",&DAT_140f18160,0);
    uVar1 = DAT_140211db4;
    uVar5 = CONCAT44(uVar7,DAT_140f3142c);
    FUN_1400b6270("drag float2",&DAT_140f18150,DAT_140211db4,0,CONCAT44(uVar4,0x3f800000),0,uVar5);
    uVar4 = DAT_1401c86c8;
    uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),DAT_140f3142c);
    uVar7 = 0;
    FUN_1400b66dd("drag int2",&DAT_140f18160,DAT_1401c86c8,0,0xff,0,uVar5);
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    FUN_1400ba332("slider float2",&DAT_140f18150,0,uVar4,0,CONCAT44(uVar7,DAT_140f3142c));
    uVar7 = 0;
    FUN_1400ba5cd("slider int2",&DAT_140f18160,0,0xff,0,DAT_140f3142c);
    FUN_1400b1021("3-wide");
    FUN_1400befcc("input float3",&DAT_140f18150,"%.3f",0);
    FUN_1400bf105("input int3",&DAT_140f18160,0);
    uVar5 = CONCAT44(uVar8,DAT_140f3142c);
    FUN_1400b62f7("drag float3",&DAT_140f18150,uVar1,0,CONCAT44(uVar7,0x3f800000),0,uVar5);
    uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),DAT_140f3142c);
    uVar7 = 0;
    FUN_1400b6762("drag int3",&DAT_140f18160,uVar4,0,0xff,0,uVar5);
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    FUN_1400ba3b5("slider float3",&DAT_140f18150,0,uVar4,0,CONCAT44(uVar7,DAT_140f3142c));
    uVar7 = 0;
    FUN_1400ba651("slider int3",&DAT_140f18160,0,0xff,0,DAT_140f3142c);
    FUN_1400b1021("4-wide");
    FUN_1400beffe("input float4",&DAT_140f18150,"%.3f",0);
    FUN_1400bf13e("input int4",&DAT_140f18160,0);
    FUN_1400b637e("drag float4",&DAT_140f18150,uVar1,0,CONCAT44(uVar7,0x3f800000),0,
                  CONCAT44(uVar8,DAT_140f3142c));
    uVar7 = 0;
    FUN_1400b67e7("drag int4",&DAT_140f18160,uVar4,0,0xff,0,DAT_140f3142c);
    uVar5 = CONCAT44(uVar7,DAT_140f3142c);
    FUN_1400ba438("slider float4",&DAT_140f18150,0,uVar4,0,uVar5);
    uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),DAT_140f3142c);
    uVar3 = 0;
    FUN_1400ba6d5("slider int4",&DAT_140f18160,0,0xff,0,uVar5);
    uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
    FUN_1400b1021("Ranges");
    uVar3 = uVar3 & 0xffffffff00000000;
    uVar5 = CONCAT44(uVar4,0x42c80000);
    FUN_1400b6405("range float",&DAT_140f18170,&DAT_140f18174,DAT_140210020,uVar3,uVar5,
                  "Min: %.1f %%","Max: %.1f %%",0x600);
    uVar4 = DAT_1401c86c0;
    uVar3 = uVar3 & 0xffffffff00000000;
    uVar6 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),1000);
    FUN_1400b686c("range int",&DAT_140f18178,&DAT_140f1817c,DAT_1401c86c0,uVar3,uVar6,
                  "Min: %d units","Max: %d units",0);
    FUN_1400b686c("range int (no bounds)",&DAT_140f18178,&DAT_140f1817c,uVar4,
                  uVar3 & 0xffffffff00000000,uVar6 & 0xffffffff00000000,"Min: %d units",
                  "Max: %d units",0);
    FUN_1400c66d9();
    return;
  }
  return;
}

