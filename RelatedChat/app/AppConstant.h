//
// Copyright (c) 2016 Related Code - http://relatedcode.com
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

//-------------------------------------------------------------------------------------------------------------------------------------------------
#define		HEXCOLOR(c) [UIColor colorWithRed:((c>>24)&0xFF)/255.0 green:((c>>16)&0xFF)/255.0 blue:((c>>8)&0xFF)/255.0 alpha:((c)&0xFF)/255.0]
//-------------------------------------------------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------------------------------------------------
#define		FIREBASE_STORAGE					@"gs://fir-11-7fa8b.appspot.com"
//-------------------------------------------------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------------------------------------------------
#define		DEFAULT_TAB							0
#define		VIDEO_LENGTH						5
#define		INSERT_MESSAGES						10
//-----------------------------------------------------------------------
#define		STATUS_LOADING						1
#define		STATUS_SUCCEED						2
#define		STATUS_MANUAL						3
//-----------------------------------------------------------------------
#define		MEDIA_IMAGE							1
#define		MEDIA_VIDEO							2
#define		MEDIA_AUDIO							3
//-----------------------------------------------------------------------
#define		NETWORK_MANUAL						1
#define		NETWORK_WIFI						2
#define		NETWORK_ALL							3
//-----------------------------------------------------------------------
#define		KEEPMEDIA_WEEK						1
#define		KEEPMEDIA_MONTH						2
#define		KEEPMEDIA_FOREVER					3
//-----------------------------------------------------------------------
#define		CHAT_PRIVATE						@"private"
#define		CHAT_MULTIPLE						@"multiple"
#define		CHAT_GROUP							@"group"
//-----------------------------------------------------------------------
#define		MESSAGE_TEXT						@"text"
#define		MESSAGE_EMOJI						@"emoji"
#define		MESSAGE_PICTURE						@"picture"
#define		MESSAGE_VIDEO						@"video"
#define		MESSAGE_AUDIO						@"audio"
#define		MESSAGE_LOCATION					@"location"
//-----------------------------------------------------------------------
#define		LOGIN_FACEBOOK						@"Facebook"
#define		LOGIN_EMAIL							@"Email"
//-----------------------------------------------------------------------
#define		COLOR_OUTGOING						HEXCOLOR(0x007AFFFF)
#define		COLOR_INCOMING						HEXCOLOR(0xE6E5EAFF)
//-----------------------------------------------------------------------
#define		TEXT_DELIVERED						@"Delivered"
#define		TEXT_READ							@"Read"
//-------------------------------------------------------------------------------------------------------------------------------------------------
#define		SCREEN_WIDTH						[UIScreen mainScreen].bounds.size.width
#define		SCREEN_HEIGHT						[UIScreen mainScreen].bounds.size.height
//-------------------------------------------------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------------------------------------------------
#define		FUSER_PATH							@"User"					//	Path name
#define		FUSER_OBJECTID						@"objectId"				//	String

#define		FUSER_EMAIL							@"email"				//	String
#define		FUSER_FIRSTNAME						@"firstname"			//	String
#define		FUSER_LASTNAME						@"lastname"				//	String
#define		FUSER_FULLNAME						@"fullname"				//	String
#define		FUSER_FULLNAME_LOWER				@"fullname_lower"		//	String
#define		FUSER_COUNTRY						@"country"				//	String
#define		FUSER_LOCATION						@"location"				//	String
#define		FUSER_STATUS						@"status"				//	String
#define		FUSER_LOGINMETHOD					@"loginMethod"			//	String

#define		FUSER_PICTURE						@"picture"				//	String
#define		FUSER_THUMBNAIL						@"thumbnail"			//	String

#define		FUSER_KEEPMEDIA						@"keepMedia"			//	Number
#define		FUSER_NETWORKIMAGE					@"networkImage"			//	Number
#define		FUSER_NETWORKVIDEO					@"networkVideo"			//	Number
#define		FUSER_NETWORKAUDIO					@"networkAudio"			//	Number
#define		FUSER_AUTOSAVEMEDIA					@"autoSaveMedia"		//	Boolean
//-----------------------------------------------------------------------
#define		FGROUP_PATH							@"Group"				//	Path name
#define		FGROUP_OBJECTID						@"objectId"				//	String

#define		FGROUP_USERID						@"userId"				//	String
#define		FGROUP_NAME							@"name"					//	String
#define		FGROUP_MEMBERS						@"members"				//	Array
#define		FGROUP_PICTURE						@"picture"				//	String
//-----------------------------------------------------------------------
#define		FMESSAGE_PATH						@"Message"				//	Path name
#define		FMESSAGE_OBJECTID					@"objectId"				//	String

#define		FMESSAGE_GROUPID					@"groupId"				//	String
#define		FMESSAGE_SENDERID					@"senderId"				//	String
#define		FMESSAGE_SENDERNAME					@"senderName"			//	String
#define		FMESSAGE_SENDERINITIALS				@"senderInitials"		//	String

#define		FMESSAGE_TYPE						@"type"					//	String
#define		FMESSAGE_TEXT						@"text"					//	String

#define		FMESSAGE_PICTURE					@"picture"				//	String
#define		FMESSAGE_PICTURE_WIDTH				@"picture_width"		//	Number
#define		FMESSAGE_PICTURE_HEIGHT				@"picture_height"		//	Number
#define		FMESSAGE_PICTURE_MD5				@"picture_md5"			//	String

#define		FMESSAGE_VIDEO						@"video"				//	String
#define		FMESSAGE_VIDEO_DURATION				@"video_duration"		//	Number
#define		FMESSAGE_VIDEO_MD5					@"video_md5"			//	String

#define		FMESSAGE_AUDIO						@"audio"				//	String
#define		FMESSAGE_AUDIO_DURATION				@"audio_duration"		//	Number
#define		FMESSAGE_AUDIO_MD5					@"audio_md5"			//	String

#define		FMESSAGE_LATITUDE					@"latitude"				//	Number
#define		FMESSAGE_LONGITUDE					@"longitude"			//	Number

#define		FMESSAGE_STATUS						@"status"				//	String
#define		FMESSAGE_CREATEDAT					@"createdAt"			//	Interval
//-----------------------------------------------------------------------
#define		FRECENT_PATH						@"Recent"				//	Path name
#define		FRECENT_OBJECTID					@"objectId"				//	String

#define		FRECENT_USERID						@"userId"				//	String
#define		FRECENT_GROUPID						@"groupId"				//	String

#define		FRECENT_SENDERID					@"senderId"				//	String
#define		FRECENT_SENDERNAME					@"senderName"			//	String
#define		FRECENT_SENDERINITIALS				@"senderInitials"		//	String

#define		FRECENT_PICTURE						@"picture"				//	String
#define		FRECENT_DESCRIPTION					@"description"			//	String
#define		FRECENT_MEMBERS						@"members"				//	Array
#define		FRECENT_PASSWORD					@"password"				//	String
#define		FRECENT_TYPE						@"type"					//	String

#define		FRECENT_COUNTER						@"counter"				//	Number
#define		FRECENT_LASTMESSAGE					@"lastMessage"			//	String
#define		FRECENT_LASTMESSAGEDATE				@"lastMessageDate"		//	Interval

#define		FRECENT_ISARCHIVED					@"isArchived"			//	Boolean
#define		FRECENT_ISDELETED					@"isDeleted"			//	Boolean
//-----------------------------------------------------------------------
#define		FTYPING_PATH						@"Typing"				//	Path name
//-----------------------------------------------------------------------
#define		FUSERSTATUS_PATH					@"UserStatus"			//	Path name
#define		FUSERSTATUS_OBJECTID				@"objectId"				//	String

#define		FUSERSTATUS_NAME					@"name"					//	String
#define		FUSERSTATUS_CREATEDAT				@"createdAt"			//	Interval
//-------------------------------------------------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------------------------------------------------
#define		NOTIFICATION_APP_STARTED			@"NotificationAppStarted"
#define		NOTIFICATION_USER_LOGGED_IN			@"NotificationUserLoggedIn"
#define		NOTIFICATION_USER_LOGGED_OUT		@"NotificationUserLoggedOut"
//-----------------------------------------------------------------------
#define		NOTIFICATION_CLEANUP_CHATVIEW		@"NotificationCleanupChatView"
//-------------------------------------------------------------------------------------------------------------------------------------------------
