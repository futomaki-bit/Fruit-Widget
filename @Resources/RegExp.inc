; Do NOT change this file unless you are sure you know what you are doing !!!
; ========================================================================

; © 2021 by xxenium

;Weather.com API

[Variables]
@Include=#@#Variables.inc

Location=(?siU)"v3-location-point":.*{"location":{"latitude":(.*),"longitude":(.*),.*,"adminDistrict":(.*),"adminDistrictCode":(.*),.*,"country":(.*),"countryCode":(.*),.*,"displayName":(.*),.*}

CurrentObservations=(?siU)"v3-wx-observations-current":.*{"cloudCeiling":.*,"cloudCoverPhrase":".*","dayOfWeek":".*","dayOrNight":".*","expirationTimeUtc":.*,"iconCode":(.*),"iconCodeExtend":.*,"obsQualifierCode":.*,"obsQualifierSeverity":.*,"precip1Hour":.*,"precip6Hour":.*,"precip24Hour":.*,"pressureAltimeter":(.*),"pressureChange":(.*),"pressureMeanSeaLevel":.*,"pressureTendencyCode":.*,"pressureTendencyTrend":"(.*)","relativeHumidity":(.*),"snow1Hour":.*,"snow6Hour":.*,"snow24Hour":.*,"sunriseTimeLocal":.*,"sunriseTimeUtc":.*,"sunsetTimeLocal":.*,"sunsetTimeUtc":.*,"temperature":(.*),"temperatureChange24Hour":.*,"temperatureDewPoint":(.*),"temperatureFeelsLike":(.*),"temperatureHeatIndex":.*,"temperatureMax24Hour":.*,"temperatureMaxSince7Am":.*,"temperatureMin24Hour":.*,"temperatureWindChill":.*,"uvDescription":"(.*)","uvIndex":(.*),"validTimeLocal":"(.*)","validTimeUtc":.*,"visibility":(.*),"windDirection":.*,"windDirectionCardinal":"(.*)","windGust":(.*),"windSpeed":(.*),"wxPhraseLong":"(.*)","wxPhraseMedium":.*,"wxPhraseShort":.*}

DailyForecastDayOfWeek=(?siU)"v3-wx-forecast-daily-15day":.*{.*"dayOfWeek":.*"(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)"

DailyForecastMOON=(?siU)"v3-wx-forecast-daily-15day":.*{.*"moonPhase":."(.*)",.*,"moonPhaseCode":.*"(.*)",.*"moonriseTimeLocal":.*"(.*)","(.*)",.*,"moonsetTimeLocal":.*"(.*)","(.*)",.*

DailyForecastSUN=(?siU)"v3-wx-forecast-daily-15day":.*{.*"sunriseTimeLocal":.*"(.*)","(.*)",.*,"sunsetTimeLocal":.*"(.*)","(.*)",.*

DailyForecastTempMax=(?siU)"v3-wx-forecast-daily-15day":.*{.*"temperatureMax":(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),.*

DailyForecastTempMin=(?siU)"v3-wx-forecast-daily-15day":.*{.*"temperatureMin":(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),.*

DailyForecastDate=(?siU)"v3-wx-forecast-daily-15day":.*{.*"validTimeLocal":.*"(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)"

DailyForecastDayPart=(?siU)"v3-wx-forecast-daily-15day":.*{.*"daypartName":(.*),"(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)"

DailyForecastIconCode=(?siU)"v3-wx-forecast-daily-15day":.*{.*"iconCode":(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),.*

DailyForecastDetails=(?siU)"v3-wx-forecast-daily-15day":.*{.*"iconCode":.*"narrative":(.*),"(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)"

DailyForecastPrecip=(?siU)"v3-wx-forecast-daily-15day":.*{.*"precipChance":(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),.*

DailyForecastCondition=(?siU)"v3-wx-forecast-daily-15day":.*{.*"wxPhraseLong":(.*),"(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)"

HourlyForecastIconCode=(?siU)"v3-wx-forecast-hourly-12hour":.*{.*"iconCode":(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),.*

HourlyForecastPrecip=(?siU)"v3-wx-forecast-hourly-12hour":.*{.*"precipChance":(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),.*

HourlyForecastTemp=(?siU)"v3-wx-forecast-hourly-12hour":.*{.*"temperature":(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),.*

HourlyForecastHour=(?siU)"v3-wx-forecast-hourly-12hour":.*{.*"validTimeLocal":.*"(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)"

HourlyForecastCondition=(?siU)"v3-wx-forecast-hourly-12hour":.*{.*"wxPhraseLong":(.*),"(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)"

WeatherAlert=(?siU)"v3alertsHeadlines":(?(?=.*{.*,"alerts":).*{.*,"alerts":.*(?(?=.*{"detailKey").*:".*",.*,"eventDescription":"(.*)","severityCode":(.*),"severity":"(.*)",.*,"headlineText":"(.*)",.*}).*(?(?=.*{"detailKey").*:".*",.*,"eventDescription":"(.*)","severityCode":(.*),"severity":"(.*)",.*,"headlineText":"(.*)",.*}).*(?(?=.*{"detailKey").*:".*",.*,"eventDescription":"(.*)","severityCode":(.*),"severity":"(.*)",.*,"headlineText":"(.*)",.*}).*(?(?=.*{"detailKey").*:".*",.*,"eventDescription":"(.*)","severityCode":(.*),"severity":"(.*)",.*,"headlineText":"(.*)",.*}).*(?(?=.*{"detailKey").*:".*",.*,"eventDescription":"(.*)","severityCode":(.*),"severity":"(.*)",.*,"headlineText":"(.*)",.*}).*(?(?=.*{"detailKey").*:".*",.*,"eventDescription":"(.*)","severityCode":(.*),"severity":"(.*)",.*,"headlineText":"(.*)",.*}).*(?(?=.*{"detailKey").*:".*",.*,"eventDescription":"(.*)","severityCode":(.*),"severity":"(.*)",.*,"headlineText":"(.*)",.*}).*(?(?=.*{"detailKey").*:".*",.*,"eventDescription":"(.*)","severityCode":(.*),"severity":"(.*)",.*,"headlineText":"(.*)",.*}).*)

PollenForecastDayPart=(?siU)"pollenForecast12hour":.*{.*"daypartName":(.*),"(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)"

PollenForecastGrassPollenIndex=(?siU)"pollenForecast12hour":.*{.*"grassPollenIndex":(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),.*

PollenForecastGrassPollenCategory=(?siU)"pollenForecast12hour":.*{.*"grassPollenCategory":.*"(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)".*

PollenForecastTreePollenIndex=(?siU)"pollenForecast12hour":.*{.*"treePollenIndex":(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),.*

PollenForecastTreePollenCategory=(?siU)"pollenForecast12hour":.*{.*"treePollenCategory":.*"(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)".*

PollenForecastRagweedPollenIndex=(?siU)"pollenForecast12hour":.*{.*"ragweedPollenIndex":(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),.*

PollenForecastRagweedPollenCategory=(?siU)"pollenForecast12hour":.*{.*"ragweedPollenCategory":.*"(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)".*

AirQuality=(?siU)"globalairquality":.*{.*"airQualityIndex":(.*),"airQualityCategory":"(.*)",.*,"primaryPollutant":"(.*)"

Pollutants=(?siU)"globalairquality":.*"pollutants":.*(?(?=.*"NO2").*:{"name":"(.*)","phrase":"(.*)","amount":(.*),"unit":"(.*)","category":"(.*)","categoryIndex":.*,"index":.*).*(?(?=.*"O3").*:{"name":"(.*)","phrase":"(.*)","amount":(.*),"unit":"(.*)","category":"(.*)","categoryIndex":.*,"index":.*).*(?(?=.*"SO2").*:{"name":"(.*)","phrase":"(.*)","amount":(.*),"unit":"(.*)","category":"(.*)","categoryIndex":.*,"index":.*).*(?(?=.*"PM2.5").*:{"name":"(.*)","phrase":"(.*)","amount":(.*),"unit":"(.*)","category":"(.*)","categoryIndex":.*,"index":.*).*(?(?=.*"PM10").*:{"name":"(.*)","phrase":"(.*)","amount":(.*),"unit":"(.*)","category":"(.*)","categoryIndex":.*,"index":.*).*(?(?=.*"CO").*:{"name":"(.*)","phrase":"(.*)","amount":(.*),"unit":"(.*)","category":"(.*)","categoryIndex":.*,"index":.*),

AirQualitySensitiveGroupMessage=(?siU)"globalairquality":.*{.*"messages":{"Sensitive Group":{"title":"(.*)","text":"(.*)"}

AirQualityGeneralMessage=(?siU)"globalairquality":.*{.*"messages":.*"General":{"title":"(.*)","text":"(.*)"}






; © 2021 by xxenium









